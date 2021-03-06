/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlAlgorithmStabilizedNOWRD : NSObject <VCRateControlAlgorithm> {
    unsigned int  _actualBitrate;
    bool  _basebandAdaptationEnabled;
    int  _basebandAdditionalTiersForRampUp;
    unsigned int  _basebandAverageBitrate;
    double  _basebandExpectedQueuingDelay;
    double  _basebandLTEOrGreaterRATSwitchTime;
    double  _basebandNormalizedBDCD;
    double  _basebandNormalizedQueuingDelay;
    double  _basebandNotificationArrivalTime;
    int  _basebandRadioTechnology;
    unsigned int  _basebandTotalQueueDepth;
    bool  _belowNoRampUpBandwidth;
    struct VCRateControlAlgorithmConfig { 
        unsigned int serverBagProfileNumber; 
        unsigned int *tierBitrates; 
        int initialTierIndex; 
        int maxTierIndex; 
        int minTierIndex; 
        int lowestNonEmergencyTierIndex; 
        int lowestNonEmergencyTierIndexWiFi; 
        int lowestEffectiveBWETierIndex; 
        int lowestTierIndexReactToNoServerActivity; 
        int rampUpTierNumber; 
        int rampDownTierNumber; 
        int rampUpAdditionalTierAtInitial; 
        int rampDownAdditionalTierAtInitial; 
        int rampDownBurstyLossThreshold; 
        int lowestTierForBurstyLossRampDown; 
        int lowestTierToDisableRateLimited; 
        double rampDownNOWRDThreshold; 
        double rampDownNOWRDAccThreshold; 
        double rampDownAggressiveNOWRDThreshold; 
        double rampDownAggressiveNOWRDAccThreshold; 
        double rampDownConstantOWRDDuration; 
        double rampDownOvershootDuration; 
        double rampDownOvershootNextTierRatio; 
        double rampUpFrozenDuration; 
        double rampUpSettleDuration; 
        double rampUpOWRDThreshold; 
        double rampUpNOWRDThreshold; 
        double rampUpNOWRDAccThreshold; 
        double rampUpOverBandwidthCalmDuration; 
        double rampUpBlockedTimeout; 
        int rampUpOverBandwidthTierNumber; 
        int rampDownLossEventThreshold; 
        double rampUpFrozenPLRThreshold; 
        double rampUpRateLimitedRatio; 
        double unstableRateLimitedDuration; 
        double congestionWaitDuration; 
        double owrdWindowDuration; 
        double owrdShortWindowDuration; 
        double minimumNOWRDTimeDifference; 
        double owrdInitialRampUpReadyDuration; 
        unsigned int owrdHistorySize; 
        unsigned int owrdMininumHistorySize; 
        unsigned int fastRampDownBitrateRange; 
        unsigned int fastRampUpBitrateRange; 
        unsigned int consecutiveRampDownThresholdForCongestion; 
        bool receivedBandwidthEstimationEnabled; 
        bool basebandAdaptationEnabled; 
        bool rateLimitedEnabled; 
        bool randomRampUpFrozenDurationEnabled; 
        bool oscillationAvoidanceEnabled; 
        bool fastRampUpEnabled; 
        bool blockRampUpInSaturatedNetworkEnabled; 
        bool wifiEmergencyTiersEnabled; 
        int fastRampUpHighestTier; 
        double fastRampUpRTTRatio; 
        int fastRampUpTierGap; 
        double fastRampUpNetworkStableDuration; 
        double networkSaturatedRTTToMinRTTRatio; 
        double networkSaturatedOWRDToMinRTTRatio; 
        int networkSaturatedPersistFeedbackNumber; 
        double networkSaturatedRTTDecreasingThreshold; 
        int oscillationAvoidanceTierChangeThreshold; 
        int oscillationAvoidanceTiersHitThreshold; 
        double oscillationAvoidanceDurationRatio; 
        double oscillationAvoidanceDurationRatioAggressive; 
        int stabilizationScheme; 
        double rampDownNBDCDThreshold; 
        double rampDownAggressiveNBDCDThreshold; 
        double rampDownNormalizedQueuingDelayThreshold; 
        double rampDownMediumQueuingDelayThreshold; 
        double rampDownHighQueuingDelayThreshold; 
        double rampDownEmergencyTierCoolDownTime; 
        double rampDownWiFiEmergencyTierCoolDownTime; 
        double rampUpNBDCDThreshold; 
        double rampUpQueuingDelayThreshold; 
        double rampUpNBDCDCoolDownTime; 
        double rampUpAudioFractionCoolDownTime; 
        double basebandRATSwitchCoolDownTime; 
        double basebandAdaptationCrossTrafficRatio; 
        double rampUpNetworkUnstableCoolDownTime; 
        double autoResumeDurationAfterPaused; 
        bool oscillationDetectionEnabled; 
        double oscillationCoolDownTime; 
        int oscillationDeviationTierNumber; 
        int oscillationDeviationCountThreshold; 
        bool preventBasebandRampDownCloseToKeyFrame; 
        int basebandRampDownSlowDownFactor; 
        double networkUnstableRTTThreshold; 
        double networkUnstablePLRThreshold; 
    }  _config;
    unsigned int  _consecutiveRampDown;
    int  _currentHistoryIndex;
    int  _currentHistorySize;
    int  _currentTierIndex;
    bool  _didMBLRampDown;
    unsigned short  _echoedTimestamp;
    double  _extendedRampUpFrozenExitTime;
    unsigned int  _fastRampDownBitrateRange;
    double  _firstBelowNoRampUpBandwidthTime;
    double  _firstOWRDFrozenTime;
    struct { 
        double owrd; 
        double roundTripTime; 
        double roundTripTimeMinEnvelope; 
        double packetLossRate; 
        int tierIndex; 
    }  _history;
    double  _inAudioBitrate;
    double  _inVideoBitrate;
    bool  _isCongested;
    bool  _isFirstInitialRampUpDone;
    bool  _isFirstTimestampArrived;
    bool  _isNewRateSentOut;
    bool  _isOWRDConstant;
    bool  _isOWRDListReady;
    bool  _isOvershoot;
    bool  _isPeriodicLoggingEnabled;
    bool  _isRampUpSettling;
    bool  _isRemoteBandwidthEstimationStable;
    bool  _isSendBitrateLimited;
    bool  _isStable;
    bool  _isWaitingForBasebandRampDown;
    double  _lastAllowRampUpTime;
    double  _lastBasebandRampDownTime;
    double  _lastHighNBDCDTime;
    double  _lastNetworkUnstableTime;
    double  _lastNoOvershootBWEstimationTime;
    double  _lastPositiveOWRDTime;
    double  _lastRampDownTimeDueToBaseband;
    double  _lastRampDownTimeDueToFeedback;
    unsigned int  _lastRateChangeCounter;
    double  _lastTimeStartRampingDown;
    unsigned int  _localBandwidthEstimation;
    void * _logBasebandDump;
    void * _logDump;
    VCRateControlMediaController * _mediaController;
    unsigned int  _mostBurstLoss;
    unsigned int  _newOWRDSampleCollected;
    double  _nowrd;
    double  _nowrdAcc;
    double  _nowrdShort;
    double  _outAudioBitrate;
    double  _outVideoBitrate;
    double  _owrd;
    struct { 
        double time[100]; 
        double owrd[100]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
        double nowrd; 
        double nowrdShort; 
        double nowrdAcc; 
        bool isOWRDListTooShortDuringInitialRampUp; 
    }  _owrdList;
    unsigned int  _packetBurstLoss;
    double  _packetLossRate;
    double  _packetLossRateAudio;
    double  _packetLossRateVideo;
    unsigned int  _packetReceivedVideo;
    bool  _paused;
    double  _previousNOWRD;
    double  _previousRoundTripTime;
    int  _previousTierIndex;
    unsigned short  _previousTimestamp;
    unsigned short  _queuingDelayTimestamp;
    int  _rampDownStatus;
    double  _rampUpFrozenDuration;
    double  _rampUpFrozenTime;
    double  _rampUpSettleDuration;
    int  _rampUpStatus;
    unsigned int  _rateChangeCounter;
    double  _rateChangeSystemTime;
    unsigned int  _rateControlCounter;
    double  _rateControlTime;
    unsigned int  _receiveTimestamp;
    unsigned int  _remoteBandwidthEstimation;
    double  _roundTripTime;
    double  _roundTripTimeMinEnvelope;
    unsigned int  _roundTripTimeTick;
    double  _sendBitrateLimitedStartTime;
    double  _stabilizationTime;
    int  _state;
    unsigned int  _targetBitrate;
    unsigned int  _timestampWrapAroundCounter;
    unsigned int  _totalPacketReceived;
    unsigned int  _worstRecentBurstLoss;
    double  _worstRecentRoundTripTime;
}

@property (nonatomic, readonly) unsigned int actualBitrate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didMBLRampDown;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCongested;
@property (nonatomic, readonly) bool isFirstInitialRampUpDone;
@property (nonatomic, readonly) bool isNewRateSentOut;
@property (nonatomic, readonly) bool isSendBitrateLimited;
@property (nonatomic) unsigned int localBandwidthEstimation;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic, readonly) unsigned int mostBurstLoss;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) double packetLossRate;
@property (nonatomic, readonly) double packetLossRateAudio;
@property (nonatomic, readonly) double packetLossRateVideo;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, readonly) unsigned int rateChangeCounter;
@property (nonatomic, readonly) double roundTripTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int targetBitrate;
@property (nonatomic, readonly) unsigned int totalPacketReceived;
@property (nonatomic, readonly) unsigned int worstRecentBurstLoss;
@property (nonatomic, readonly) double worstRecentRoundTripTime;

- (unsigned int)actualBitrate;
- (int)basebandAdditionalTiersForRampUp;
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;
- (void)calculatePacketLossWithReceivedPacketCount:(unsigned int)arg1 receivedPacketCountVideo:(unsigned int)arg2 packetBurstLoss:(unsigned short)arg3 packetLossSample:(double)arg4;
- (void)calculateRoundTripTimeWithSample:(double)arg1;
- (void)checkBandwidthOvershoot;
- (void)checkCongestionStatus;
- (void)checkMediaQueueBitrates;
- (bool)checkNetworkSaturationWithRoundTripTime:(double)arg1 minRoundTripTime:(double)arg2 packetLossRate:(double)arg3 owrd:(double)arg4;
- (void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2;
- (id)className;
- (void)configure:(struct VCRateControlAlgorithmConfig { unsigned int x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; int x31; int x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; double x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; bool x46; bool x47; bool x48; bool x49; bool x50; bool x51; bool x52; bool x53; int x54; double x55; int x56; double x57; double x58; double x59; int x60; double x61; int x62; int x63; double x64; double x65; int x66; double x67; double x68; double x69; double x70; double x71; double x72; double x73; double x74; double x75; double x76; double x77; double x78; double x79; double x80; double x81; bool x82; double x83; int x84; int x85; bool x86; int x87; double x88; double x89; })arg1 restartRequired:(bool)arg2;
- (void)dealloc;
- (bool)didMBLRampDown;
- (bool)doRateControlWithBasebandStatistics:(struct { int x1; double x2; bool x3; bool x4; bool x5; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_6_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; double x_2_2_13; unsigned int x_2_2_14; unsigned int x_2_2_15; double x_2_2_16; unsigned int x_2_2_17; bool x_2_2_18; struct { int x_19_3_1; unsigned int x_19_3_2; unsigned int x_19_3_3; unsigned int x_19_3_4; double x_19_3_5; double x_19_3_6; double x_19_3_7; unsigned int x_19_3_8; unsigned int x_19_3_9; } x_2_2_19; } x_6_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_6_1_3; } x6; })arg1;
- (bool)doRateControlWithStatistics:(struct { int x1; double x2; bool x3; bool x4; bool x5; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_6_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; double x_2_2_13; unsigned int x_2_2_14; unsigned int x_2_2_15; double x_2_2_16; unsigned int x_2_2_17; bool x_2_2_18; struct { int x_19_3_1; unsigned int x_19_3_2; unsigned int x_19_3_3; unsigned int x_19_3_4; double x_19_3_5; double x_19_3_6; double x_19_3_7; unsigned int x_19_3_8; unsigned int x_19_3_9; } x_2_2_19; } x_6_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_6_1_3; } x6; })arg1;
- (bool)doRateControlWithVCRCStatistics:(struct { int x1; double x2; bool x3; bool x4; bool x5; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_6_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; double x_2_2_13; unsigned int x_2_2_14; unsigned int x_2_2_15; double x_2_2_16; unsigned int x_2_2_17; bool x_2_2_18; struct { int x_19_3_1; unsigned int x_19_3_2; unsigned int x_19_3_3; unsigned int x_19_3_4; double x_19_3_5; double x_19_3_6; double x_19_3_7; unsigned int x_19_3_8; unsigned int x_19_3_9; } x_2_2_19; } x_6_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_6_1_3; } x6; })arg1;
- (void)enableBasebandDump:(void*)arg1;
- (void)enableLogDump:(void*)arg1 enablePeriodicLogging:(bool)arg2;
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;
- (double)getRampUpFrozenDuration;
- (double)getRampUpSettleDuration;
- (unsigned short)getTimestampFromMicroTime:(double)arg1;
- (id)init;
- (bool)isBasebandNotificationOutOfKeyFrameCoolDownTime;
- (bool)isBasebandRATGreaterOrSameAsLTE:(int)arg1;
- (bool)isBitrateOscillatingWithCurrentTierIndex:(int)arg1;
- (bool)isCongested;
- (bool)isFirstInitialRampUpDone;
- (bool)isNetworkSaturated;
- (bool)isNewRateSentOut;
- (bool)isPaused;
- (bool)isRoundTripTimeDecreasingOrLessThanMinEnvelope;
- (bool)isSendBitrateLimited;
- (bool)keepOvershootingRampDownBandwidth;
- (unsigned int)localBandwidthEstimation;
- (void)logToDumpFilesWithString:(id)arg1;
- (id)mediaController;
- (unsigned int)mostBurstLoss;
- (double)owrd;
- (double)packetLossRate;
- (double)packetLossRateAudio;
- (double)packetLossRateVideo;
- (void)printRateControlInfoToLogDump;
- (int)rampDownTier;
- (int)rampDownTierDueToBaseband:(double)arg1;
- (int)rampUpTier;
- (unsigned int)rateChangeCounter;
- (bool)recentlyGoAboveRampUpBandwidth;
- (void)resetRampingStatus;
- (double)roundTripTime;
- (void)runRateControlStateTransition;
- (void)setBitrateUnstable;
- (void)setDidMBLRampDown:(bool)arg1;
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;
- (void)setMediaController:(id)arg1;
- (void)setPaused:(bool)arg1;
- (bool)shouldEnableBasebandAdaptationWithBasebandStatistics:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; double x11; BOOL x12[64]; int x13; })arg1 previousBasebandRAT:(int)arg2;
- (bool)shouldFastRampUp;
- (bool)shouldRampDown;
- (bool)shouldRampDownDueToBaseband;
- (bool)shouldRampDownDueToNOWRD;
- (bool)shouldRampDownDueToNOWRDAcc;
- (bool)shouldRampUp;
- (bool)shouldRampUpDueToBaseband;
- (bool)shouldUnblockRampUpAfterTimeOut;
- (void)stateChangeTo:(int)arg1;
- (void)stateEnter;
- (void)stateExit;
- (unsigned int)targetBitrate;
- (unsigned int)totalPacketReceived;
- (void)updateCongestionStatusWhenRampDown:(double)arg1;
- (void)updateCongestionStatusWhenRampUp;
- (bool)updateInternalStatistics:(struct { int x1; double x2; bool x3; bool x4; bool x5; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_6_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; double x_2_2_13; unsigned int x_2_2_14; unsigned int x_2_2_15; double x_2_2_16; unsigned int x_2_2_17; bool x_2_2_18; struct { int x_19_3_1; unsigned int x_19_3_2; unsigned int x_19_3_3; unsigned int x_19_3_4; double x_19_3_5; double x_19_3_6; double x_19_3_7; unsigned int x_19_3_8; unsigned int x_19_3_9; } x_2_2_19; } x_6_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned int x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; } x_6_1_3; } x6; })arg1;
- (void)updateInternalStatus;
- (void)updateVCRateControlHistory;
- (unsigned int)worstRecentBurstLoss;
- (double)worstRecentRoundTripTime;

@end
