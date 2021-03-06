/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFHomeAccessoryInfoMutation : NSObject <AFHomeAccessoryInfoMutating> {
    NSString * _assistantIdentifier;
    AFHomeAccessoryInfo * _baseModel;
    NSString * _model;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasUniqueIdentifier : 1; 
        unsigned int hasName : 1; 
        unsigned int hasModel : 1; 
        unsigned int hasRoomName : 1; 
        unsigned int hasAssistantIdentifier : 1; 
    }  _mutationFlags;
    NSString * _name;
    NSString * _roomName;
    NSUUID * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;

@end
