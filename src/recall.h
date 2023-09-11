// Copyright (c) 1981-86 Robert A. Koeneke
// Copyright (c) 1987-94 James E. Wilson
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

// Recall_t holds the player's known knowledge for any given monster, aka memories
struct Recall_t{
    uint32_t movement;
    uint32_t spells;
    uint16_t deaths;
    uint16_t defenses;
    uint8_t wake;
    uint8_t ignore;
    uint8_t attacks[MON_MAX_ATTACKS];
    uint16_t kills;

    uint16_t *get_kills() {
        if (kills == SHRT_MAX) {
            return nullptr;
        }
        return &kills;
    }
};

extern Recall_t creature_recall[MON_MAX_CREATURES]; // Monster memories. -CJS-
extern const char *recall_description_attack_type[25];
extern const char *recall_description_attack_method[20];
extern const char *recall_description_how_much[8];
extern const char *recall_description_move[6];
extern const char *recall_description_spell[15];
extern const char *recall_description_breath[5];
extern const char *recall_description_weakness[6];

int memoryRecall(int monster_id);
void recallMonsterAttributes(char command);
