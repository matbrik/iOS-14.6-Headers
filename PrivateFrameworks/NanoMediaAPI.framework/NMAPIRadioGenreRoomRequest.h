/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaAPI.framework/NanoMediaAPI
 */

@interface NMAPIRadioGenreRoomRequest : NMAPIRequest {
    NSURL * _URL;
}

@property (nonatomic, copy) NSURL *URL;

- (void).cxx_destruct;
- (id)URL;
- (id)_bagRoomURLRegularExpressionWithStoreBagDictionary:(id)arg1;
- (id)_roomIdentifierWithStoreBagDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithURL:(id)arg1;
- (Class)responseParserClass;
- (void)setURL:(id)arg1;
- (id)urlComponentsWithStoreBagDictionary:(id)arg1 error:(id*)arg2;

@end
