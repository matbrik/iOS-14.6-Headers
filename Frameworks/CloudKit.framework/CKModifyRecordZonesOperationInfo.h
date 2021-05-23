/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool  _allowDefaultZoneSave;
    bool  _dontFetchFromServer;
    bool  _markZonesAsUserPurged;
    long long  _maxZoneSaveAttempts;
    NSArray * _recordZoneIDsToDelete;
    NSArray * _recordZonesToSave;
}

@property (nonatomic) bool allowDefaultZoneSave;
@property (nonatomic) bool dontFetchFromServer;
@property (nonatomic) bool markZonesAsUserPurged;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic, retain) NSArray *recordZoneIDsToDelete;
@property (nonatomic, retain) NSArray *recordZonesToSave;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowDefaultZoneSave;
- (bool)dontFetchFromServer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)markZonesAsUserPurged;
- (long long)maxZoneSaveAttempts;
- (id)recordZoneIDsToDelete;
- (id)recordZonesToSave;
- (void)setAllowDefaultZoneSave:(bool)arg1;
- (void)setDontFetchFromServer:(bool)arg1;
- (void)setMarkZonesAsUserPurged:(bool)arg1;
- (void)setMaxZoneSaveAttempts:(long long)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;

@end