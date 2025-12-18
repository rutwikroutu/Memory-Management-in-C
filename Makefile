CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude

#This recursively gets our .c files (gets all possible locations in code in which we could have c files)
SOURCES := $(shell find code -type f -name '*.c' 2>/dev/null)

# For each source, the executable name in bin is simply the basename (no dir, no .c)
BIN_TARGETS := $(foreach s,$(SOURCES),bin/$(basename $(notdir $(s))))

# Default: build all executables
.PHONY: all
all: $(BIN_TARGETS)

# Pattern rule: how to build bin/<name>
# We will find the matching source by basename at build time.
bin/%:
	@# find the source file with matching basename (first match)
	@code="$$(printf "%s\n" $(SOURCES) | grep "/$*.c$$" | head -n1)"; \
	if [ -z "$$code" ]; then \
	  echo "ERROR: no source found for $@ (searched for $*.c)"; exit 1; \
	fi; \
	mkdir -p bin; \
	printf "Compiling $$code -> $@\n"; \
	$(CC) $(CFLAGS) "$$code" -o "$@"

.PHONY: $(SOURCES)
$(SOURCES):
	@binname=bin/$(basename $(notdir $@)); \
	$(MAKE) "$$binname"

.PHONY: clean
clean:
	rm -rf bin
