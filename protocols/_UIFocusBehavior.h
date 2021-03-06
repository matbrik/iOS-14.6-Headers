/* Generated by RuntimeBrowser.
 */

@protocol _UIFocusBehavior <NSObject>

@required

+ (id)sharedInstance;

- (bool)controlCanBecomeFocused:(UIControl *)arg1;
- (long long)focusDeferral;
- (long long)focusRingForContext:(UIFocusUpdateContext *)arg1;
- (bool)ignoresKeyWindowStatusWhenRestoringFocus;
- (long long)indirectMovementPriority;
- (bool)inferCellFocusability;
- (bool)searchBarTextFieldCanBecomeFocused;
- (bool)shouldConvertIndirectTapsIntoArrowKeys;
- (bool)shouldEnableFocusOnSelect;
- (bool)shouldForwardKeyCode:(long long)arg1 toFocusEngineWithFirstResponder:(UIResponder *)arg2;
- (bool)shouldSupressIndirectMovementOnSelect;
- (bool)shouldUseAccessibilityCompareForItemGeometry;
- (bool)supportViewTransparencyAndMultipleWindows;
- (bool)supportsArrowKeys;
- (bool)supportsFocusGroups;
- (bool)supportsGameControllers;
- (bool)supportsIndirectPanningMovement;
- (bool)supportsLinearMovementDebugOverlay;
- (bool)supportsTabKey;
- (bool)syncsFocusAndResponder;
- (bool)tabBarButtonCanBecomeFocused;
- (bool)tabBarCanBecomeFocused;
- (bool)treatFirstAndLastHeadingsAsGlobal;
- (bool)treatFocusableItemAsLeaf;
- (bool)wantsFocusForTraitCollection:(UITraitCollection *)arg1;

@end
