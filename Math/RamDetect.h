#pragma once
#include <iostream>
#include <memory>

struct AllocationMetrics;

void* operator new(size_t size);

void operator delete(void* memory, size_t size);

void PrintMemoryUsage();

