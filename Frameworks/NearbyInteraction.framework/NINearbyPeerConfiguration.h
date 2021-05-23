/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NINearbyPeerConfiguration : NIConfiguration {
    NIDiscoveryToken * _peerDiscoveryToken;
}

@property (nonatomic, copy) NIDiscoveryToken *peerDiscoveryToken;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeerToken:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)peerDiscoveryToken;
- (void)setPeerDiscoveryToken:(id)arg1;

@end