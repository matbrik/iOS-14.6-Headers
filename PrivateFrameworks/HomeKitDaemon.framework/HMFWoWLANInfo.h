/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding> {
    NSArray * _additionalMACAddresses;
    NSData * _primaryMACAddress;
}

@property (nonatomic, readonly) NSArray *additionalMACAddresses;
@property (nonatomic, readonly) NSData *primaryMACAddress;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalMACAddresses;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryIdentifier:(id)arg1 wifiIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)primaryMACAddress;

@end