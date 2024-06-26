/*
 * finalexpansion.c -- VIC20 Final Expansion v3.1 emulation.
 *
 * Written by
 *  Daniel Kahlin <daniel@kahlin.net>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef VICE_FINALEXPANSION_H
#define VICE_FINALEXPANSION_H

#include <stdio.h>

#include "types.h"

uint8_t finalexpansion_ram123_read(uint16_t addr);
void finalexpansion_ram123_store(uint16_t addr, uint8_t value);
uint8_t finalexpansion_blk1_read(uint16_t addr);
void finalexpansion_blk1_store(uint16_t addr, uint8_t value);
uint8_t finalexpansion_blk2_read(uint16_t addr);
void finalexpansion_blk2_store(uint16_t addr, uint8_t value);
uint8_t finalexpansion_blk3_read(uint16_t addr);
void finalexpansion_blk3_store(uint16_t addr, uint8_t value);
uint8_t finalexpansion_blk5_read(uint16_t addr);
void finalexpansion_blk5_store(uint16_t addr, uint8_t value);

void finalexpansion_init(void);
void finalexpansion_reset(void);
void finalexpansion_powerup(void);

void finalexpansion_config_setup(uint8_t *rawcart);
int finalexpansion_bin_attach(const char *filename);
/* int finalexpansion_bin_attach(const char *filename, uint8_t *rawcart); */
int finalexpansion_crt_attach(FILE *fd, uint8_t *rawcart, const char *filename);
void finalexpansion_detach(void);

int finalexpansion_bin_save(const char *filename);
int finalexpansion_crt_save(const char *filename);
int finalexpansion_flush_image(void);

int finalexpansion_resources_init(void);
void finalexpansion_resources_shutdown(void);
int finalexpansion_cmdline_options_init(void);

struct snapshot_s;

int finalexpansion_snapshot_write_module(struct snapshot_s *s);
int finalexpansion_snapshot_read_module(struct snapshot_s *s);

#endif
