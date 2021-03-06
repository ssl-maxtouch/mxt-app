#pragma once
//------------------------------------------------------------------------------
// Copyright 2018 Solomon Systech. All rights reserved.
//
// Author: giuseppe.penone@solomon-systech.com
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//    1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
//    2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY SOLOMON SYSTECH ''AS IS'' AND ANY EXPRESS OR IMPLIED
// WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
// EVENT SHALL SOLOMON SYSTECH OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
// OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//------------------------------------------------------------------------------

struct spi_dev_conn_info
{
    int bus;
    int chipselect;
    int gpio;
};

struct spi_dev_device
{
};

int spi_dev_read_register(struct mxt_device *mxt, uint8_t *buf, uint16_t start_register, uint16_t count, size_t *bytes_read);

int spi_dev_write_register(struct mxt_device *mxt, uint8_t const *buf, uint16_t start_register, uint16_t count);

int spi_dev_bootloader_read(struct mxt_device *mxt, uint8_t *buf, uint16_t count);

int spi_dev_bootloader_write(struct mxt_device *mxt, unsigned char const *buf, int count);
