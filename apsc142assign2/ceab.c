//
// Created by seanmk on 1/19/25.
//

#include <stdio.h>
#include "ceab.h"

// description: calculates the remaining required AUs for a given area according to
// CEAB, given the already taken AUs in that area.
// preconditions: area is one of the codes from ceab.h, already_taken >= 0
// postconditions: returns the remaining needed AUs between 0 and the required AUs
int aus_remaining(int area, int already_taken) {
    int required = 0;
    switch (area) {
        case MA:
        case NS:
            required = REQUIRED_MA_NS;
            break;
        case ES:
        case ED:
        case CS:
            required = REQUIRED_ES_ED_CS;
            break;
    }

    int remaining = required - already_taken;
    if (remaining < 0) {
        remaining = 0;
    }
    return remaining;
}

// description: determine if a student has enough accreditation units to graduate.
// preconditions: arguments are >= 0
// postconditions: returns CAN_GRADUATE if CEAB requirements are met and CANNOT_GRADUATE otherwise
int can_graduate(int ma_taken, int ns_taken, int es_taken, int ed_taken, int cs_taken) {
    int area_needs = 0;
    int ma_ns_taken = 0;
    int eng_taken = 0;
    int total_taken = 0;

    // area is MA, NS, ES, ED, CS
    // add up the needs for each study area
    area_needs = aus_remaining(MA, ma_taken) +
            aus_remaining(NS, ns_taken) +
            aus_remaining(ES, es_taken) +
            aus_remaining(ED, ed_taken) +
            aus_remaining(CS, cs_taken);

    // add up the math and natural science AUs
    ma_ns_taken = ma_taken + ns_taken;

    // add up the engineering science and design AUs
    eng_taken = es_taken + ed_taken;

    // add up the total taken AUs
    total_taken = ma_taken + ns_taken + es_taken + ed_taken + cs_taken;

//    printf("Remaining area needs: %d\nMA/NS taken: %d\nEng taken: %d\nTotal taken: %d\n",
//           area_needs, ma_ns_taken, eng_taken, total_taken);

    // check all four requirements
    // 1. each area has the requirements met
    // 2. the requirement for math + natural science is met
    // 3. the requirement for eng science + eng design is met
    // 4. the total AU requirement is met
    if (area_needs == 0 &&
        ma_ns_taken >= COMBINED_MA_AND_NS &&
        eng_taken >= COMBINED_ES_AND_ED &&
        total_taken >= COMBINED_TOTAL) {

        return CAN_GRADUATE;
    } else {
        return CANNOT_GRADUATE;
    }
}
