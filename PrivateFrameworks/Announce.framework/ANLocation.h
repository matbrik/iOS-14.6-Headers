/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANLocation : NSObject <ANMessage, NSSecureCoding> {
    NSArray * _deviceIDs;
    unsigned long long  _flags;
    NSNumber * _homeLocationStatus;
    NSUUID * _homeUUID;
    NSArray * _roomUUIDs;
    NSArray * _userUUIDs;
    NSArray * _zoneUUIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *deviceIDs;
@property (nonatomic) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *homeLocationStatus;
@property (nonatomic, copy) NSUUID *homeUUID;
@property (nonatomic, retain) NSArray *roomUUIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long target;
@property (nonatomic, retain) NSArray *userUUIDs;
@property (nonatomic, retain) NSArray *zoneUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allRoomsInHome:(id)arg1;
- (bool)containsAccessory:(id)arg1;
- (id)copy;
- (id)deviceIDs;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (id)homeLocationStatus;
- (id)homeUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeID:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)roomUUIDs;
- (void)setDeviceIDs:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHomeLocationStatus:(id)arg1;
- (void)setHomeUUID:(id)arg1;
- (void)setRoomUUIDs:(id)arg1;
- (void)setUserUUIDs:(id)arg1;
- (void)setZoneUUIDs:(id)arg1;
- (unsigned long long)target;
- (id)userUUIDs;
- (id)zoneUUIDs;

@end
