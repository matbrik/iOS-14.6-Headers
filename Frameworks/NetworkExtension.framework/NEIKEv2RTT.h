/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2RTT : NSObject {
    int  _lastRequestMessageID;
    unsigned long long  _rtt_cur;
    unsigned long long  _rtt_min;
    unsigned long long  _rtt_start_time;
    unsigned long long  _rtt_updated;
    unsigned long long  _rtt_var;
    unsigned long long  _rxt_cur;
    unsigned short  _rxt_shift;
    unsigned long long  _srtt;
}

@property (nonatomic) int lastRequestMessageID;
@property (nonatomic) unsigned long long rtt_cur;
@property (nonatomic) unsigned long long rtt_min;
@property (nonatomic) unsigned long long rtt_start_time;
@property (nonatomic) unsigned long long rtt_updated;
@property (nonatomic) unsigned long long rtt_var;
@property (nonatomic) unsigned long long rxt_cur;
@property (nonatomic) unsigned short rxt_shift;
@property (nonatomic) unsigned long long srtt;

- (bool)getCurrentTime:(struct timeval { long long x1; int x2; }*)arg1;
- (id)init;
- (int)lastRequestMessageID;
- (unsigned long long)nextRetransmissionInterval;
- (void)reset;
- (void)resetRTTMeasurement;
- (unsigned long long)rtt_cur;
- (unsigned long long)rtt_min;
- (unsigned long long)rtt_start_time;
- (unsigned long long)rtt_updated;
- (unsigned long long)rtt_var;
- (unsigned long long)rxt_cur;
- (unsigned short)rxt_shift;
- (void)setLastRequestMessageID:(int)arg1;
- (void)setRtt_cur:(unsigned long long)arg1;
- (void)setRtt_min:(unsigned long long)arg1;
- (void)setRtt_start_time:(unsigned long long)arg1;
- (void)setRtt_updated:(unsigned long long)arg1;
- (void)setRtt_var:(unsigned long long)arg1;
- (void)setRxt_cur:(unsigned long long)arg1;
- (void)setRxt_shift:(unsigned short)arg1;
- (void)setSrtt:(unsigned long long)arg1;
- (unsigned long long)srtt;
- (bool)startRTTMeasurement:(id)arg1 requestMessageID:(int)arg2;
- (void)updateRTT:(id)arg1 responseMessageID:(int)arg2;

@end