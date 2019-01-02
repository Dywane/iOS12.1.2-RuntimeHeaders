/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayConfigurationRequest : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _hdrMode;
    long long  _overscanCompensation;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    double  _refreshRate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly) long long overscanCompensation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) double refreshRate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (long long)hdrMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)overscanCompensation;
- (struct CGSize { double x1; double x2; })pixelSize;
- (double)refreshRate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
