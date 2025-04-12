#pragma once
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

// following functions created by Andrew Burge

void LoadTaskDataFromFile(PLISTNODE* list);


void SaveTaskDataToFile(PLISTNODE* list);

void SearchTask(PLISTNODE list);
