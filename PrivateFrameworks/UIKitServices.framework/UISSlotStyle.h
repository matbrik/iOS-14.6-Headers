/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISSlotStyle : NSObject <NSCopying, NSSecureCoding> {
    union { 
        unsigned short all; 
        struct { 
            unsigned int accessibilityContrast : 1; 
            unsigned int displayRange : 2; 
            unsigned int displayScale : 3; 
            unsigned int layoutDirection : 1; 
            unsigned int legibilityWeight : 1; 
            unsigned int preferredContentSizeCategory : 4; 
            unsigned int userInterfaceIdiom : 3; 
            unsigned int userInterfaceStyle : 1; 
        } ; 
    }  _fields;
    NSString * _localization;
    struct CGColor { } * _tintColor;
}

@property (nonatomic, readonly) long long accessibilityContrast;
@property (nonatomic, readonly) NSArray *assetAppearanceNames;
@property (nonatomic, readonly) long long assetDeviceIdiom;
@property (nonatomic, readonly) long long assetLayoutDirection;
@property (nonatomic, readonly) double assetScaleFactor;
@property (nonatomic, readonly) long long displayRange;
@property (nonatomic, readonly) unsigned char displayScale;
@property (nonatomic, readonly) const struct __CFString { }*fontContentSizeCategory;
@property (nonatomic, readonly) long long fontLegibilityWeight;
@property (nonatomic, readonly) double graphicsDisabledAlpha;
@property (nonatomic, readonly) struct CGColor { }*graphicsForegroundColor;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) long long legibilityWeight;
@property (nonatomic, readonly) NSString *localization;
@property (nonatomic, readonly) long long preferredContentSizeCategory;
@property (nonatomic, readonly) struct CGColor { }*tintColor;
@property (nonatomic, readonly) long long userInterfaceIdiom;
@property (nonatomic, readonly) long long userInterfaceStyle;

+ (id)slotStyleWithAccessibilityContrast:(long long)arg1 displayRange:(long long)arg2 displayScale:(unsigned char)arg3 layoutDirection:(long long)arg4 legibilityWeight:(long long)arg5 localization:(id)arg6 preferredContentSizeCategory:(long long)arg7 tintColor:(struct CGColor { }*)arg8 userInterfaceIdiom:(long long)arg9 userInterfaceStyle:(long long)arg10;
+ (id)slotStyleWithLocalization:(id)arg1 displayScale:(unsigned char)arg2 displayRange:(long long)arg3 userInterfaceStyle:(long long)arg4 preferredContentSizeCategory:(long long)arg5 tintColor:(struct CGColor { }*)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accessibilityContrast;
- (id)assetAppearanceNames;
- (long long)assetDeviceIdiom;
- (long long)assetLayoutDirection;
- (double)assetScaleFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)displayRange;
- (unsigned char)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (const struct __CFString { }*)fontContentSizeCategory;
- (long long)fontLegibilityWeight;
- (double)graphicsDisabledAlpha;
- (struct CGColor { }*)graphicsForegroundColor;
- (unsigned long long)hash;
- (id)initWithAccessibilityContrast:(long long)arg1 displayRange:(long long)arg2 displayScale:(unsigned char)arg3 layoutDirection:(long long)arg4 legibilityWeight:(long long)arg5 localization:(id)arg6 preferredContentSizeCategory:(long long)arg7 tintColor:(struct CGColor { }*)arg8 userInterfaceIdiom:(long long)arg9 userInterfaceStyle:(long long)arg10;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)layoutDirection;
- (long long)legibilityWeight;
- (id)localization;
- (long long)preferredContentSizeCategory;
- (struct CGColor { }*)tintColor;
- (long long)userInterfaceIdiom;
- (long long)userInterfaceStyle;

@end