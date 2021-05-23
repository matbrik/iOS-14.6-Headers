/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFVariableConfigurationAccessoryView : UIInputView {
    UIButton * _clearButton;
    <WFVariableConfigurationAccessoryViewDelegate> * _delegate;
    UIButton * _doneButton;
    unsigned long long  _exitAccessory;
    UIButton * _keyboardButton;
    UIButton * _renameButton;
    UIButton * _revealActionButton;
}

@property (nonatomic) bool canRename;
@property (nonatomic) bool canRevealAction;
@property (nonatomic) UIButton *clearButton;
@property (nonatomic) <WFVariableConfigurationAccessoryViewDelegate> *delegate;
@property (nonatomic) UIButton *doneButton;
@property (nonatomic) unsigned long long exitAccessory;
@property (nonatomic) UIButton *keyboardButton;
@property (nonatomic) UIButton *renameButton;
@property (nonatomic) UIButton *revealActionButton;

- (void).cxx_destruct;
- (bool)canRename;
- (bool)canRevealAction;
- (id)clearButton;
- (void)clearPressed;
- (id)delegate;
- (id)doneButton;
- (void)donePressed;
- (unsigned long long)exitAccessory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)keyboardButton;
- (void)layoutSubviews;
- (id)renameButton;
- (void)renamePressed;
- (void)returnToKeyboardPressed;
- (id)revealActionButton;
- (void)revealActionPressed;
- (void)setCanRename:(bool)arg1;
- (void)setCanRevealAction:(bool)arg1;
- (void)setClearButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setExitAccessory:(unsigned long long)arg1;
- (void)setKeyboardButton:(id)arg1;
- (void)setRenameButton:(id)arg1;
- (void)setRevealActionButton:(id)arg1;

@end