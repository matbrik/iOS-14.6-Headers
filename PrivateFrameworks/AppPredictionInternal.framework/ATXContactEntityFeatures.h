/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXContactEntityFeatures : NSObject <ATXJSONSerializableProtocol> {
    bool  _isFavoriteContact;
    bool  _isVIPContact;
    NSDictionary * _modeToBundleIdSetForIncomingInteractions;
    NSDictionary * _modeToBundleIdSetForOutgoingInteractions;
}

@property (nonatomic) bool isFavoriteContact;
@property (nonatomic) bool isVIPContact;
@property (nonatomic, retain) NSDictionary *modeToBundleIdSetForIncomingInteractions;
@property (nonatomic, retain) NSDictionary *modeToBundleIdSetForOutgoingInteractions;

- (void).cxx_destruct;
- (id)initFromJSON:(id)arg1;
- (bool)isFavoriteContact;
- (bool)isVIPContact;
- (id)jsonRepresentation;
- (id)modeToBundleIdSetForIncomingInteractions;
- (id)modeToBundleIdSetForOutgoingInteractions;
- (void)setIsFavoriteContact:(bool)arg1;
- (void)setIsVIPContact:(bool)arg1;
- (void)setModeToBundleIdSetForIncomingInteractions:(id)arg1;
- (void)setModeToBundleIdSetForOutgoingInteractions:(id)arg1;

@end