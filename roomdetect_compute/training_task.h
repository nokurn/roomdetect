// training_task.h
// Jeremiah Griffin <jgrif007@ucr.edu>
// Lab Section: 23
// Assignment: Custom Project - Room Detector - Compute Application
//
// I acknowledge all content contained herein, excluding template or example
// code, is my own original work.

#ifndef CUSTOM_COMPUTE_TRAINING_TASK_H
#define CUSTOM_COMPUTE_TRAINING_TASK_H

#include "task.h"
#include <stdint.h>

/// \brief Task for the training state machine
extern task_t training_task;

/// \brief Number of the room to use for training
extern uint8_t training_room;

#endif // CUSTOM_COMPUTE_TRAINING_TASK_H
