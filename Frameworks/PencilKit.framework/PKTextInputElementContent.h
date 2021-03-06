/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKTextInputElementContent : NSObject {
    <UITextInput> * __textInput;
    NSString * __webComposedContextString;
    UIWKDocumentContext * __webDocumentContext;
    UIView<UIWKInteractionViewProtocol> * __webDocumentSourceView;
    <UITextInput> * __webTextInput;
    long long  _dataLoadedState;
    PKTextInputElement * _element;
    UITextInputTraits * _textInputTraits;
}

@property (nonatomic) <UITextInput> *_textInput;
@property (nonatomic, retain) NSString *_webComposedContextString;
@property (nonatomic, retain) UIWKDocumentContext *_webDocumentContext;
@property (nonatomic) UIView<UIWKInteractionViewProtocol> *_webDocumentSourceView;
@property (nonatomic) <UITextInput> *_webTextInput;
@property (nonatomic, readonly) long long contentLength;
@property (setter=_setDataLoadedState:, nonatomic) long long dataLoadedState;
@property (nonatomic, readonly) PKTextInputElement *element;
@property (nonatomic, readonly) bool isReadyForTextEdits;
@property (nonatomic, readonly) bool isSingleLineDocument;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (nonatomic, readonly) bool supportsAutoLineBreaks;
@property (nonatomic, readonly) NSString *textContentType;
@property (nonatomic, retain) UITextInputTraits *textInputTraits;

- (void).cxx_destruct;
- (bool)_needsToLoadData;
- (void)_setDataLoadedState:(long long)arg1;
- (id)_textInput;
- (void)_textInput_enumerateBoundsForCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inCoordinateSpace:(id)arg2 reverse:(bool)arg3 block:(id /* block */)arg4;
- (id)_webComposedContextString;
- (id)_webDocumentContext;
- (void)_webDocumentContext_enumerateBoundsForCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inCoordinateSpace:(id)arg2 reverse:(bool)arg3 block:(id /* block */)arg4;
- (id)_webDocumentSourceView;
- (void)_webInsertCommittedTextPhase3:(id)arg1 withAlternatives:(id)arg2 activePreviewText:(id)arg3 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 webTextInput:(id)arg5;
- (bool)_webInsertTextsToCommitPhase2:(id)arg1 withAlternatives:(id)arg2 activePreviewText:(id)arg3 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 committedLength:(long long*)arg5;
- (id)_webTextInput;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForCharacterIndex:(long long)arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectInCoordinateSpace:(id)arg1;
- (long long)characterIndexClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2 forInsertingText:(bool)arg3;
- (bool)configureSelectionStyleForDeletionPreview;
- (bool)configureSelectionStyleForHighlight;
- (bool)configureSelectionStyleForNormalSelection;
- (long long)contentLength;
- (long long)dataLoadedState;
- (void)deleteTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)element;
- (void)enumerateBoundsForCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inCoordinateSpace:(id)arg2 reverse:(bool)arg3 block:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTextPlaceholder:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)initWithElement:(id)arg1;
- (void)insertTextPlaceholderWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)insertTextsToCommit:(id)arg1 withAlternatives:(id)arg2 activePreviewText:(id)arg3 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 completion:(id /* block */)arg5;
- (bool)isReadyForTextEdits;
- (bool)isSingleLineDocument;
- (bool)isValidRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)keyboardType;
- (void)loadDataIfNeededWithTextInput:(id)arg1;
- (void)loadDataIfNeededWithWebDocumentSourceView:(id)arg1 textInput:(id)arg2 rectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 completion:(id /* block */)arg4;
- (void)loadTextInputTraitsIfNeededWithTextInput:(id)arg1;
- (id)protectedCharacterIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterAtIndex:(unsigned long long)arg1;
- (id)rectValuesForSelectionRects:(id)arg1 inCoordinateSpace:(id)arg2 visibleOnly:(bool)arg3;
- (void)removeTextPlaceholder:(id)arg1 willInsertText:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)requestUpdatedApproximateCaretRectInCoordinateSpace:(id)arg1 completion:(id /* block */)arg2;
- (void)requestUpdatedLastSelectionRectForCommittedTextLength:(long long)arg1 targetCoordinateSpace:(id)arg2 completion:(id /* block */)arg3;
- (void)selectTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 completion:(id /* block */)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inCoordinateSpace:(id)arg2 visibleOnly:(bool)arg3;
- (void)setSelectionWithReferencePoint:(struct CGPoint { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)setTextInputTraits:(id)arg1;
- (void)set_textInput:(id)arg1;
- (void)set_webComposedContextString:(id)arg1;
- (void)set_webDocumentContext:(id)arg1;
- (void)set_webDocumentSourceView:(id)arg1;
- (void)set_webTextInput:(id)arg1;
- (id)stringInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)supportsAutoLineBreaks;
- (id)textContentType;
- (id)textInputTraits;

@end
