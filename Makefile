CC = ${pkgs.clang}/bin/clang
override CFLAGS += -g -Wno-everything -pthread -lm

TARGET ?= $(basename $(wildcard *.c))

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $< -o $@

debug: CFLAGS += -O0
debug: $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
	