/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TASingleDeviceRecord : NSObject <NSSecureCoding> {
    NSData * _address;
    NSDate * _creationDate;
    bool  _hasSurfacedNotification;
    double  _keepAliveInterval;
    TASPAdvertisement * _latestAdvertisement;
    NSMutableArray * _stagedDetectionResults;
    unsigned long long  _state;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSData *address;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic) bool hasSurfacedNotification;
@property (nonatomic) double keepAliveInterval;
@property (nonatomic, readonly) NSDate *keepStagedDetectionAliveUntilDate;
@property (nonatomic, readonly) TASPAdvertisement *latestAdvertisement;
@property (nonatomic, retain) NSMutableArray *stagedDetectionResults;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_shouldPushStagedDetection:(id)arg1;
- (id)address;
- (void)clearAllStagedDetections;
- (id)creationDate;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)forceStagedDetectionsToSurfaceImmediately;
- (id)getDetectionsReadyToPush;
- (id)getStagedDetections;
- (bool)hasSurfacedNotification;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceAddress:(id)arg1 state:(unsigned long long)arg2 type:(unsigned long long)arg3 date:(id)arg4 keepAliveInterval:(double)arg5;
- (bool)isEqual:(id)arg1;
- (double)keepAliveInterval;
- (id)keepStagedDetectionAliveUntilDate;
- (id)latestAdvertisement;
- (void)mergeWithAnotherSingleDeviceRecord:(id)arg1;
- (void)purgeStagedDetectionsWithClock:(id)arg1;
- (void)setHasSurfacedNotification:(bool)arg1;
- (void)setKeepAliveInterval:(double)arg1;
- (void)setStagedDetectionResults:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)stageDetection:(id)arg1;
- (id)stagedDetectionResults;
- (unsigned long long)state;
- (unsigned long long)type;
- (void)updateLatestAdvertisement:(id)arg1;

@end
