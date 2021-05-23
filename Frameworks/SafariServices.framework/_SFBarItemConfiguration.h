/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBarItemConfiguration : NSObject {
    bool  _enabled;
    bool  _hidden;
    id /* block */  _menuProvider;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) id /* block */ menuProvider;

- (void).cxx_destruct;
- (id)init;
- (bool)isEnabled;
- (bool)isHidden;
- (id /* block */)menuProvider;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setMenuProvider:(id /* block */)arg1;

@end