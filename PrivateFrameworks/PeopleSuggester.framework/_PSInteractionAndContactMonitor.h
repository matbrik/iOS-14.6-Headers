/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSInteractionAndContactMonitor : NSObject {
    CNContactStore * _contactStore;
    _CDInteractionStore * _interactionStore;
    NSMutableSet * _mutableContactIdsInContactStore;
    NSMutableSet * _mutableContactIdsSeen;
}

@property (nonatomic, readonly, copy) NSSet *contactIdsInContactStore;
@property (nonatomic, readonly, copy) NSSet *contactIdsSeen;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (retain) NSMutableSet *mutableContactIdsInContactStore;
@property (retain) NSMutableSet *mutableContactIdsSeen;

- (void).cxx_destruct;
- (id)contactIdsInContactStore;
- (id)contactIdsSeen;
- (id)contactStore;
- (void)fetchAllContactIdsFromContactStore;
- (id)initWithInteractionStore:(id)arg1 contactStore:(id)arg2;
- (id)interactionStore;
- (id)mutableContactIdsInContactStore;
- (id)mutableContactIdsSeen;
- (void)notifyWhenContactAddedToInteractionStore:(id)arg1;
- (void)notifyWhenContactStoreChanged;
- (void)populateContactIdCachesWithMessageCache:(id)arg1 shareCache:(id)arg2;
- (void)setMutableContactIdsInContactStore:(id)arg1;
- (void)setMutableContactIdsSeen:(id)arg1;

@end