/*
Copyright (c) 2015, Conor Stokes
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// NOTE - these tables are in this file for readability / navagability and should *only* be included in
// indexbufferdecompression.cpp

#pragma once

// Prefix code decoding table used for triangle codes 
static const PrefixCodeTableEntry TriangleDecoding[] =
{
	{ 0, 1 },
	{ 12, 6 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 6, 5 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 11, 7 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 9, 6 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 4, 7 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 6, 5 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 3, 7 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 8, 7 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 12, 6 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 6, 5 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 5, 7 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 9, 6 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 13, 7 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 6, 5 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 7, 7 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 10, 7 },
	{ 0, 1 },
	{ 1, 2 },
	{ 0, 1 },
	{ 2, 3 },
	{ 0, 1 },
	{ 1, 2 }
};

// Prefix code decoding table used for vertex fifo codes.
static const PrefixCodeTableEntry VertexDecoding[] =
{
	{ 1, 1 },
	{ 7, 5 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 16, 7 },
	{ 1, 1 },
	{ 6, 5 },
	{ 1, 1 },
	{ 5, 5 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 4, 5 },
	{ 1, 1 },
	{ 12, 6 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 15, 7 },
	{ 1, 1 },
	{ 11, 6 },
	{ 1, 1 },
	{ 10, 6 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 14, 7 },
	{ 1, 1 },
	{ 7, 5 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 9, 6 },
	{ 1, 1 },
	{ 6, 5 },
	{ 1, 1 },
	{ 5, 5 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 4, 5 },
	{ 1, 1 },
	{ 20, 7 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 8, 6 },
	{ 1, 1 },
	{ 31, 8 },
	{ 1, 1 },
	{ 17, 7 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 13, 7 },
	{ 1, 1 },
	{ 7, 5 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 27, 8 },
	{ 1, 1 },
	{ 6, 5 },
	{ 1, 1 },
	{ 5, 5 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 4, 5 },
	{ 1, 1 },
	{ 12, 6 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 25, 8 },
	{ 1, 1 },
	{ 11, 6 },
	{ 1, 1 },
	{ 10, 6 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 24, 8 },
	{ 1, 1 },
	{ 7, 5 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 9, 6 },
	{ 1, 1 },
	{ 6, 5 },
	{ 1, 1 },
	{ 5, 5 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 4, 5 },
	{ 1, 1 },
	{ 19, 7 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 8, 6 },
	{ 1, 1 },
	{ 18, 7 },
	{ 1, 1 },
	{ 29, 8 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 22, 8 },
	{ 1, 1 },
	{ 7, 5 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 16, 7 },
	{ 1, 1 },
	{ 6, 5 },
	{ 1, 1 },
	{ 5, 5 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 4, 5 },
	{ 1, 1 },
	{ 12, 6 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 15, 7 },
	{ 1, 1 },
	{ 11, 6 },
	{ 1, 1 },
	{ 10, 6 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 14, 7 },
	{ 1, 1 },
	{ 7, 5 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 9, 6 },
	{ 1, 1 },
	{ 6, 5 },
	{ 1, 1 },
	{ 5, 5 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 4, 5 },
	{ 1, 1 },
	{ 20, 7 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 8, 6 },
	{ 1, 1 },
	{ 30, 8 },
	{ 1, 1 },
	{ 17, 7 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 13, 7 },
	{ 1, 1 },
	{ 7, 5 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 26, 8 },
	{ 1, 1 },
	{ 6, 5 },
	{ 1, 1 },
	{ 5, 5 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 4, 5 },
	{ 1, 1 },
	{ 12, 6 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 0, 8 },
	{ 1, 1 },
	{ 11, 6 },
	{ 1, 1 },
	{ 10, 6 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 23, 8 },
	{ 1, 1 },
	{ 7, 5 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 9, 6 },
	{ 1, 1 },
	{ 6, 5 },
	{ 1, 1 },
	{ 5, 5 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 4, 5 },
	{ 1, 1 },
	{ 19, 7 },
	{ 1, 1 },
	{ 3, 4 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 8, 6 },
	{ 1, 1 },
	{ 18, 7 },
	{ 1, 1 },
	{ 28, 8 },
	{ 1, 1 },
	{ 2, 3 },
	{ 1, 1 },
	{ 21, 8 }
};

// Prefix code decoding table used for edge fifo codes
static const PrefixCodeTableEntry EdgeDecoding[] =
{
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 27, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 21, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 15, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 24, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 17, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 16, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 14, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 18, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 31, 11 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 20, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 15, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 19, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 17, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 16, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 14, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 23, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 26, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 21, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 15, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 29, 11 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 17, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 16, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 14, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 18, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 25, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 20, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 15, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 19, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 17, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 16, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 14, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 22, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 27, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 21, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 15, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 24, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 17, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 16, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 14, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 18, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 30, 11 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 20, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 15, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 19, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 17, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 16, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 14, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 23, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 26, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 21, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 15, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 28, 11 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 17, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 16, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 14, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 18, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 25, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 20, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 15, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 19, 9 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 17, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 12, 7 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 13, 7 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 16, 8 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 11, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 14, 8 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 10, 6 },
	{ 0, 2 },
	{ 1, 2 },
	{ 6, 5 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 22, 10 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 5, 4 },
	{ 8, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 9, 6 },
	{ 2, 3 },
	{ 0, 2 },
	{ 1, 2 },
	{ 4, 4 },
	{ 7, 5 },
	{ 0, 2 },
	{ 1, 2 },
	{ 3, 4 }
};