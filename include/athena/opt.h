/*
 * Copyright (C) 2022 d0p1 <contact[at]d0p1.eu>
 *
 * This file is part of athena-vm.
 *
 * athena-vm is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * athena-vm is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with athena-vm.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ATHENA_VM_OPT_H
# define ATHENA_VM_OPT_H 1

# include <stdint.h>

# define OPT_FLAG_JIT       0x1

typedef enum {
	DUMP_REGS_NONE = 0,
	DUMP_REGS_NORMAL,
	DUMP_REGS_PRETTY
} OptDumpRegs;

typedef struct {
	uint32_t flags;
	char *board;
	OptDumpRegs dump_regs;
	OptDumpRegs dump_asm;
} Opt;

#endif /* !ATHENA_VM_OPT_H */
