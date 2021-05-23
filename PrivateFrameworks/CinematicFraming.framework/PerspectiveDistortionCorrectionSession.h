/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface PerspectiveDistortionCorrectionSession : FrameUndistortionSession {
    float  _stereographicFisheyeF;
    float  _stereographicFisheyeMaxStrength;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)_fisheyeStrengthForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2 outputAspectRatioInDeviceOrientation:(float)arg3;
- (float)_getHeightForWidth:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2;
- (float)_getWidthForHeight:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_moveDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_outputPlaneSizeForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_pointInFramingSpaceLandscapeLeftIsValid:(void *)arg1 withDisplayRect:(void *)arg2; // needs 2 arg types, found 1: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }
- (void)_projectPointInFramingSpaceLandscapeLeft:(void *)arg1 toDisplayRectInFramingSpaceLandscapeLeft:(void *)arg2; // needs 2 arg types, found 1: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_rotationMatrixForDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_scaleDisplayRectSizeToFit:(struct CGSize { double x1; double x2; })arg1;
- (void)_searchEarliestValidPointOnIntervalWithStart:(void *)arg1 andEnd:(void *)arg2 displayRect:(void *)arg3; // needs 3 arg types, found 1: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }
- (struct CGSize { double x1; double x2; })_searchValidSizeForStartSize:(void *)arg1 invalidPoint:(void *)arg2; // needs 2 arg types, found 1: struct CGSize { double x1; double x2; }
- (void)_setUVUVShaderParametersForRotationNormalizedDisplayRect:(void *)arg1 gidToNormalizedOutput:(void *)arg2 calibrationParameters:(void *)arg3 commandEncoder:(void *)arg4; // needs 4 arg types, found 3: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, struct { float x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; }, id
- (void)_setYYYYShaderParametersForRotationNormalizedDisplayRect:(void *)arg1 gidToNormalizedOutput:(void *)arg2 calibrationParameters:(void *)arg3 commandEncoder:(void *)arg4; // needs 4 arg types, found 3: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, struct { float x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; }, id
- (id)_uvuvuvuvuvKernelShaderName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calibrationParameters:(struct { float x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; })arg2;
- (id)_yyyyKernelShaderName;
- (id)init;

@end