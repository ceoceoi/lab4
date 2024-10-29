CC = gcc
CFLAGS = -c
SRC = task1.c task1i.c stopwatch.c 99.c fi.c cities.c
USE_WALL = 1  # Set to 1 to enable -Wall, 0 to disable

# Add -Wall to CFLAGS if USE_WALL is set to 1
ifeq ($(USE_WALL), 1)
    CFLAGS += -Wall
endif

# Default target when no target is provided
.DEFAULT_GOAL := help

# All target (compile and run)
all: compile run

# Compile target
compile:
	@mkdir -p build
	@echo "Compiling..."
	for src in $(SRC); do \
		$(CC) $(CFLAGS) $$src -o build/$$src.o; \
	done
	$(CC) build/*.o -o build/app

# Run target
run:
	@echo "Running..."
	@./build/app

# Clean target
clean:
	rm -rf build

# Help target
help:
	@echo "Usage: make [target]"
	@echo "Targets:"
	@echo "  all     - Compile and run the project"
	@echo "  compile - Compile the project"
	@echo "  run     - Run the compiled executable"
	@echo "  clean   - Remove build files"
	@echo "  help    - Display this help message"

# Individual task targets (optional)
task1:
	$(CC) $(CFLAGS) task1.c -o task1.o
task1i:
	$(CC) $(CFLAGS) task1i.c -o task1i.o
stopwatch:
	$(CC) $(CFLAGS) stopwatch.c -o stopwatch.o
99:
	$(CC) $(CFLAGS) 99.c -o 99.o
fi:     
	$(CC) $(CFLAGS) fi.c -o fi.o
cities: 
	$(CC) $(CFLAGS) cities.c -o cities.o

