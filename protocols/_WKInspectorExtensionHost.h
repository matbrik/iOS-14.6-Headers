/* Generated by RuntimeBrowser.
 */

@protocol _WKInspectorExtensionHost <NSObject>

@optional

- (void)close;
- (void)registerExtensionWithID:(void *)arg1 displayName:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, _WKInspectorExtension *, void*
- (void)unregisterExtension:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: _WKInspectorExtension *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end