/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSiTunesMetadata : NSObject <NSSecureCoding> {
    NSString * _artistName;
    unsigned long long  _betaVersionIdentifier;
    bool  _deviceBasedVPP;
    bool  _gameCenterEnabled;
    bool  _gameCenterEverEnabled;
    NSString * _genre;
    unsigned long long  _genreIdentifier;
    NSString * _itemName;
    bool  _purchasedRedownload;
    NSString * _ratingLabel;
    unsigned long long  _ratingRank;
    NSString * _sourceApp;
    NSString * _storeCohort;
    unsigned long long  _storeFront;
    unsigned long long  _storeItemIdentifier;
    NSArray * _subgenres;
    NSString * _variantID;
    unsigned long long  _versionIdentifier;
}

@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) unsigned long long betaVersionIdentifier;
@property (getter=isDeviceBasedVPP, nonatomic, readonly) bool deviceBasedVPP;
@property (getter=isGameCenterEnabled, nonatomic, readonly) bool gameCenterEnabled;
@property (getter=wasGameCenterEverEnabled, nonatomic, readonly) bool gameCenterEverEnabled;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) unsigned long long genreIdentifier;
@property (nonatomic, readonly) NSString *itemName;
@property (getter=isPurchasedRedownload, nonatomic, readonly) bool purchasedRedownload;
@property (nonatomic, readonly) NSString *ratingLabel;
@property (nonatomic, readonly) unsigned long long ratingRank;
@property (nonatomic, readonly) NSString *sourceApp;
@property (nonatomic, readonly) NSString *storeCohort;
@property (nonatomic, readonly) unsigned long long storeFront;
@property (nonatomic, readonly) unsigned long long storeItemIdentifier;
@property (nonatomic, readonly) NSArray *subgenres;
@property (nonatomic, readonly) NSString *variantID;
@property (nonatomic, readonly) unsigned long long versionIdentifier;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; int x_1_1_6; struct LSVersionNumber { unsigned char x_7_2_1[32]; } x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned char x_1_1_21; unsigned char x_1_1_22; unsigned int x_1_1_23; unsigned short x_1_1_24; unsigned int x_1_1_25; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; } x7; unsigned int x8; }*)arg2;
- (id)artistName;
- (unsigned long long)betaVersionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (unsigned long long)genreIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDeviceBasedVPP;
- (bool)isGameCenterEnabled;
- (bool)isPurchasedRedownload;
- (id)itemName;
- (id)ratingLabel;
- (unsigned long long)ratingRank;
- (id)sourceApp;
- (id)storeCohort;
- (unsigned long long)storeFront;
- (unsigned long long)storeItemIdentifier;
- (id)subgenres;
- (id)variantID;
- (unsigned long long)versionIdentifier;
- (bool)wasGameCenterEverEnabled;

@end
