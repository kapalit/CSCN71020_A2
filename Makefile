# Makefile for Rectangle Calculator
# CSCN71020 Assignment 2

CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -g
TARGET = rectangle_calculator
SRCDIR = BCSRec
BUILDDIR = build
SOURCES = $(SRCDIR)/main.c

# Default target
all: $(BUILDDIR)/$(TARGET)

# Create build directory and compile
$(BUILDDIR)/$(TARGET): $(SOURCES) | $(BUILDDIR)
	$(CC) $(CFLAGS) -o $@ $^
	@echo "✅ Build complete: $@"

# Create build directory
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Clean build files
clean:
	rm -rf $(BUILDDIR)
	@echo "🧹 Cleaned build directory"

# Run the program
run: $(BUILDDIR)/$(TARGET)
	./$(BUILDDIR)/$(TARGET)

# Test build (compile only)
test-build: $(BUILDDIR)/$(TARGET)
	@echo "✅ Test build successful"

.PHONY: all clean run test-build
