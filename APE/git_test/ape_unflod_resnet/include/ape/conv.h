#ifndef _CONV_H
#define _CONV_H
#include "ape_cmd.h"

void conv_program(void * data);

void conv_set_hw_idx(void * data);

void conv_enable(void * data);

void conv_parse(void *data);

void conv_finish(void *data);
#endif 