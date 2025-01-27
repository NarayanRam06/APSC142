//
// Created by seanmk on 1/19/25.
//

#ifndef SANDBOX_CEAB_H
#define SANDBOX_CEAB_H

// constants for thresholds to meet
#define REQUIRED_MA_NS 195
#define REQUIRED_ES_ED_CS 225
#define COMBINED_MA_AND_NS 420
#define COMBINED_ES_AND_ED 900
#define COMBINED_TOTAL 1850

// codes for each study area for the aus_remaining function
#define MA 0
#define NS 1
#define ES 2
#define ED 3
#define CS 4

// return codes for the can_graduate function
#define CANNOT_GRADUATE 0
#define CAN_GRADUATE 1

// description: calculates the remaining required AUs for a given area according to
// CEAB, given the already taken AUs in that area.
// preconditions: area is one of the codes from ceab.h, already_taken >= 0
// postconditions: returns the remaining needed AUs between 0 and the required AUs
int aus_remaining(int area, int already_taken);

// description: determine if a student has enough accreditation units to graduate.
// preconditions: arguments are >= 0
// postconditions: returns CAN_GRADUATE if CEAB requirements are met and CANNOT_GRADUATE otherwise
int can_graduate(int ma_taken, int ns_taken, int es_taken, int ed_taken, int cs_taken);

#endif //SANDBOX_CEAB_H
