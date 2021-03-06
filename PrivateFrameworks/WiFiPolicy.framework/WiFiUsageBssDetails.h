/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFiUsageBssDetails : NSObject <NSCopying> {
    long long  _apMode;
    long long  _apProfile;
    NSString * _bssid;
    long long  _channel;
    long long  _channelWidth;
    NSString * _deviceVersion;
    bool  _hasAppleIE;
    bool  _hasDomainName;
    bool  _hasInterworkingIE;
    bool  _hasNaiRealms;
    bool  _hasRoamingOis;
    bool  _hasWpsIE;
    bool  _isEdgeBss;
    double  _locationLatitude;
    double  _locationLongitude;
    NSString * _manufacturerName;
    NSString * _modelName;
    NSString * _modelNumber;
    unsigned long long  _networkAccessCode;
    long long  _phyMode;
    long long  _rssi;
    unsigned long long  _venueCode;
    unsigned long long  _venueGroup;
}

@property (nonatomic) long long apMode;
@property (nonatomic) long long apProfile;
@property (nonatomic, copy) NSString *bssid;
@property (nonatomic) long long channel;
@property (nonatomic) long long channelWidth;
@property (nonatomic, copy) NSString *deviceVersion;
@property (nonatomic) bool hasAppleIE;
@property (nonatomic) bool hasDomainName;
@property (nonatomic) bool hasInterworkingIE;
@property (nonatomic) bool hasNaiRealms;
@property (nonatomic) bool hasRoamingOis;
@property (nonatomic) bool hasWpsIE;
@property (nonatomic) bool isEdgeBss;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic) unsigned long long networkAccessCode;
@property (nonatomic) long long phyMode;
@property (nonatomic) long long rssi;
@property (nonatomic) unsigned long long venueCode;
@property (nonatomic) unsigned long long venueGroup;

+ (id)bssWithIdentifier:(id)arg1 apProfile:(long long)arg2 apMode:(long long)arg3 phyMode:(long long)arg4 channel:(long long)arg5 channelWidth:(long long)arg6 latitude:(double)arg7 longitude:(double)arg8 isEdgeBss:(bool)arg9;
+ (id)bssWithIdentifier:(id)arg1 channel:(long long)arg2 rssi:(long long)arg3;

- (void).cxx_destruct;
- (long long)apMode;
- (long long)apProfile;
- (id)bssid;
- (long long)channel;
- (long long)channelBand;
- (long long)channelWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceVersion;
- (id)eventDictionary:(bool)arg1 isInternalInstall:(bool)arg2;
- (bool)hasAppleIE;
- (bool)hasDomainName;
- (bool)hasInterworkingIE;
- (bool)hasNaiRealms;
- (bool)hasRoamingOis;
- (bool)hasWpsIE;
- (unsigned long long)hash;
- (bool)isEdgeBss;
- (bool)isEqual:(id)arg1;
- (double)locationLatitude;
- (double)locationLongitude;
- (id)manufacturerName;
- (id)modelName;
- (id)modelNumber;
- (unsigned long long)networkAccessCode;
- (id)oui;
- (long long)phyMode;
- (long long)rssi;
- (void)setApMode:(long long)arg1;
- (void)setApProfile:(long long)arg1;
- (void)setBssid:(id)arg1;
- (void)setChannel:(long long)arg1;
- (void)setChannelWidth:(long long)arg1;
- (void)setDeviceVersion:(id)arg1;
- (void)setHasAppleIE:(bool)arg1;
- (void)setHasDomainName:(bool)arg1;
- (void)setHasInterworkingIE:(bool)arg1;
- (void)setHasNaiRealms:(bool)arg1;
- (void)setHasRoamingOis:(bool)arg1;
- (void)setHasWpsIE:(bool)arg1;
- (void)setIsEdgeBss:(bool)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setNetworkAccessCode:(unsigned long long)arg1;
- (void)setPhyMode:(long long)arg1;
- (void)setRssi:(long long)arg1;
- (void)setVenueCode:(unsigned long long)arg1;
- (void)setVenueGroup:(unsigned long long)arg1;
- (unsigned long long)venueCode;
- (unsigned long long)venueGroup;

@end
