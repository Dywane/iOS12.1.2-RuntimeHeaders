/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSMagnifyMode : NSObject <NSCopying> {
    NSString * _localizedName;
    NSString * _name;
    NSArray * _previewHTMLStrings;
    NSArray * _previewStyleSheets;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _zoomed;
}

@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *previewHTMLStrings;
@property (nonatomic, retain) NSArray *previewStyleSheets;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (getter=isZoomed, nonatomic) bool zoomed;

+ (id)magnifyModeWithSize:(struct CGSize { double x1; double x2; })arg1 name:(id)arg2 localizedName:(id)arg3 isZoomed:(bool)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isZoomed;
- (id)localizedName;
- (id)name;
- (id)previewHTMLStrings;
- (id)previewStyleSheets;
- (void)setLocalizedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreviewHTMLStrings:(id)arg1;
- (void)setPreviewStyleSheets:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setZoomed:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
