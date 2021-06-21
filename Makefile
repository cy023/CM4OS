PROJECT	= build/cm4os

MACH    = cortex-m4
MCU     = atsame54p20a

CC      = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy
OBJDUMP = arm-none-eabi-objdump
SIZE    = arm-none-eabi-size
NM      = arm-none-eabi-nm

INCLUDE = -I./src -I./startup
BUILD   = build

CFLAGS  = -mcpu=$(MACH)
CFLAGS += $(INCLUDE)
CFLAGS += -mthumb
CFLAGS += -std=c99
CFLAGS += -g3
CFLAGS += -Og
CFLAGS += -Wall -Wextra
# CFLAGS += -DSTM32F107xC -DDEBUG
# CFLAGS += -Wp,-MM,-MP,-MT,$(BUILD)/$(*F).o,-MF,$(BUILD)/$(*F).d

# LDFLAGS  = -nostdlib
LDFLAGS += -T startup/same54p20a.ld
LDFLAGS += -Wl,-Map=$(PROJECT).map
# LDFLAGS += -nostartfiles -Wl,-Map=$(PROJECT).map,--cref,--gc-sections
# LDFLAGS += -lc -lgcc
# LDFLAGS += -lm
LDFLAGS += -specs=nosys.specs
# LDFLAGS += -specs=nosys.specs --specs=nano.specs -flto

CSRC   = main.c startup_same54p20a.c
COBJ   = $(CSRC:.c=.o)
COBJ  := $(addprefix $(BUILD)/,$(COBJ))
VPATH  = src:startup

all: build size

build: $(PROJECT).elf $(PROJECT).hex $(PROJECT).bin $(PROJECT).lst $(PROJECT).sym

# Display compiler version information.
version :
	@$(CC) --version

# Create final output file (.hex or .bin) from ELF output file.
%.hex: %.elf
	@echo
	$(OBJCOPY) -O ihex $< $@

%.bin: %.elf
	@echo
	$(OBJCOPY) -O binary $< $@

# Create extended listing file from ELF output file.
%.lst: %.elf
	@echo
	$(OBJDUMP) -h -S -C $< > $@

# Create a symbol table from ELF output file.
%.sym: %.elf
	@echo
	$(NM) -n $< > $@

# Display size of file.
size:
	@echo
	$(SIZE) -A $(PROJECT).elf

# Link: create ELF output file from object files.
%.elf: $(COBJ)
	@echo
	@echo Linking...
	$(CC) $(LDFLAGS) $(COBJ) -o $@

# Compile: create object files from C source files.
$(COBJ): $(BUILD)/%.o : %.c
	@echo
	@echo $< :
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm build/*

upload:
	atprogram -t atmelice -i SWD -d $(MCU) -f ...
