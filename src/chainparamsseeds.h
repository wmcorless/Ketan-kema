#ifndef H_CHAINPARAMSSEEDS
#define H_CHAINPARAMSSEEDS

// Each line contains a 16-byte IPv6 address and a port.
// IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x05,0x2d,0x53,0xeb}, 30012},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xcc,0x9b,0x1e,0x46}, 30012}
};

static SeedSpec6 pnSeed6_test[] = {
};
#endif
