/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIconListGridLayoutConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    SBHAppLibraryVisualConfiguration * _appLibraryVisualConfiguration;
    SBHFloatyFolderVisualConfiguration * _floatyFolderVisualConfiguration;
    SBHFolderIconVisualConfiguration * _folderIconVisualConfiguration;
    SBHIconAccessoryVisualConfiguration * _iconAccessoryVisualConfiguration;
    struct SBHIconGridSizeClassIconImageInfos { 
        struct SBIconImageInfo { 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
            double scale; 
            double continuousCornerRadius; 
        } icon; 
        struct SBIconImageInfo { 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
            double scale; 
            double continuousCornerRadius; 
        } small; 
        struct SBIconImageInfo { 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
            double scale; 
            double continuousCornerRadius; 
        } medium; 
        struct SBIconImageInfo { 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
            double scale; 
            double continuousCornerRadius; 
        } large; 
        struct SBIconImageInfo { 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
            double scale; 
            double continuousCornerRadius; 
        } extraLarge; 
    }  _iconGridSizeClassIconImageInfos;
    struct SBHIconGridSizeClassSizes { 
        struct SBHIconGridSize { 
            unsigned short columns; 
            unsigned short rows; 
        } small; 
        struct SBHIconGridSize { 
            unsigned short columns; 
            unsigned short rows; 
        } medium; 
        struct SBHIconGridSize { 
            unsigned short columns; 
            unsigned short rows; 
        } large; 
        struct SBHIconGridSize { 
            unsigned short columns; 
            unsigned short rows; 
        } extraLarge; 
    }  _iconGridSizeClassSizes;
    NSMutableDictionary * _iconLabelVisualConfigurations;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _landscapeLayoutInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _listSizeForIconSpacingCalculation;
    unsigned long long  _numberOfLandscapeColumns;
    unsigned long long  _numberOfLandscapeRows;
    unsigned long long  _numberOfPortraitColumns;
    unsigned long long  _numberOfPortraitRows;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitLayoutInsets;
    SBHRootFolderVisualConfiguration * _rootFolderVisualConfiguration;
    SBHSidebarVisualConfiguration * _sidebarVisualConfiguration;
    unsigned long long  _supportedIconGridSizeClasses;
}

@property (nonatomic, copy) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (nonatomic, copy) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (nonatomic) struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; } iconGridSizeClassSizes;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } landscapeLayoutInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } listSizeForIconSpacingCalculation;
@property (nonatomic) unsigned long long numberOfLandscapeColumns;
@property (nonatomic) unsigned long long numberOfLandscapeRows;
@property (nonatomic) unsigned long long numberOfPortraitColumns;
@property (nonatomic) unsigned long long numberOfPortraitRows;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitLayoutInsets;
@property (nonatomic, readonly, copy) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (nonatomic, copy) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedIconGridSizeClasses;

- (void).cxx_destruct;
- (id)appLibraryVisualConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)floatyFolderVisualConfiguration;
- (id)folderIconVisualConfiguration;
- (unsigned long long)hash;
- (id)iconAccessoryVisualConfiguration;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; })iconGridSizeClassSizes;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfoForGridSizeClass:(unsigned long long)arg1;
- (id)iconLabelVisualConfigurationForContentSizeCategory:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeLayoutInsets;
- (struct CGSize { double x1; double x2; })listSizeForIconSpacingCalculation;
- (unsigned long long)numberOfLandscapeColumns;
- (unsigned long long)numberOfLandscapeRows;
- (unsigned long long)numberOfPortraitColumns;
- (unsigned long long)numberOfPortraitRows;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitLayoutInsets;
- (id)rootFolderVisualConfiguration;
- (void)setAppLibraryVisualConfiguration:(id)arg1;
- (void)setFloatyFolderVisualConfiguration:(id)arg1;
- (void)setFolderIconVisualConfiguration:(id)arg1;
- (void)setIconAccessoryVisualConfiguration:(id)arg1;
- (void)setIconGridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; })arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 forGridSizeClass:(unsigned long long)arg2;
- (void)setIconLabelVisualConfiguration:(id)arg1 forContentSizeCategory:(id)arg2;
- (void)setLandscapeLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setListSizeForIconSpacingCalculation:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfLandscapeColumns:(unsigned long long)arg1;
- (void)setNumberOfLandscapeRows:(unsigned long long)arg1;
- (void)setNumberOfPortraitColumns:(unsigned long long)arg1;
- (void)setNumberOfPortraitRows:(unsigned long long)arg1;
- (void)setPortraitLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSidebarVisualConfiguration:(id)arg1;
- (void)setSupportedIconGridSizeClasses:(unsigned long long)arg1;
- (id)sidebarVisualConfiguration;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedIconGridSizeClasses;

@end