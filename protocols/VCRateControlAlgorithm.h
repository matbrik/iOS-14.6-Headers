/* Generated by RuntimeBrowser.
 */

@protocol VCRateControlAlgorithm <NSObject>

@required

- (unsigned int)actualBitrate;
- (void)configure:(struct VCRateControlAlgorithmConfig { unsigned int x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; int x31; int x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; double x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; bool x46; bool x47; bool x48; bool x49; bool x50; bool x51; bool x52; bool x53; int x54; double x55; int x56; double x57; double x58; double x59; int x60; double x61; int x62; int x63; double x64; double x65; int x66; double x67; double x68; double x69; double x70; double x71; double x72; double x73; double x74; double x75; double x76; double x77; double x78; double x79; double x80; double x81; bool x82; double x83; int x84; int x85; bool x86; int x87; double x88; double x89; })arg1 restartRequired:(bool)arg2;
- (bool)didMBLRampDown;
- (bool)doRateControlWithStatistics:(struct { int x1; double x2; bool x3; bool x4; bool x5; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_6_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; double x_2_2_13; unsigned int x_2_2_14; unsigned int x_2_2_15; double x_2_2_16; unsigned int x_2_2_17; bool x_2_2_18; struct { int x_19_3_1; unsigned int x_19_3_2; unsigned int x_19_3_3; unsigned int x_19_3_4; double x_19_3_5; double x_19_3_6; double x_19_3_7; unsigned int x_19_3_8; unsigned int x_19_3_9; } x_2_2_19; } x_6_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_6_1_3; } x6; })arg1;
- (void)enableBasebandDump:(void*)arg1;
- (void)enableLogDump:(void*)arg1 enablePeriodicLogging:(bool)arg2;
- (bool)isCongested;
- (bool)isFirstInitialRampUpDone;
- (bool)isNewRateSentOut;
- (bool)isPaused;
- (bool)isSendBitrateLimited;
- (unsigned int)localBandwidthEstimation;
- (VCRateControlMediaController *)mediaController;
- (unsigned int)mostBurstLoss;
- (double)owrd;
- (double)packetLossRate;
- (double)packetLossRateAudio;
- (double)packetLossRateVideo;
- (unsigned int)rateChangeCounter;
- (double)roundTripTime;
- (void)setDidMBLRampDown:(bool)arg1;
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;
- (void)setMediaController:(VCRateControlMediaController *)arg1;
- (void)setPaused:(bool)arg1;
- (unsigned int)targetBitrate;
- (unsigned int)totalPacketReceived;
- (unsigned int)worstRecentBurstLoss;
- (double)worstRecentRoundTripTime;

@end
