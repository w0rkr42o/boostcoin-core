#ifndef CHAIN_CONDITIONAL_H
#define CHAIN_CONDITIONAL_H

extern bool fTestNet;

static const int P1_End = 43200; // PoW phase 1 end
static const int P2_Start = 640336; // PoW Phase 2 start
static const int P2_End = 10000000; // 0 coin reward PoW mining enabled for about 10 years. Incase of PoS diff drop
static const int P1_End_TestNet = 150000;
static const int P2_Start_TestNet = 150010;
static const int P2_End_TestNet = 10000000;



#endif // CHAIN_CONDITIONAL_H
