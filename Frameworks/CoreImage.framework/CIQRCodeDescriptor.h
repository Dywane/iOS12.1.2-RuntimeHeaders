/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIQRCodeDescriptor : CIBarcodeDescriptor {
    NSData * errorCorrectedPayload;
    long long  errorCorrectionLevel;
    unsigned char  maskPattern;
    long long  symbolVersion;
}

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) long long errorCorrectionLevel;
@property (readonly) unsigned char maskPattern;
@property (readonly) long long symbolVersion;

+ (id)descriptorWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCorrectedPayload;
- (long long)errorCorrectionLevel;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;
- (bool)isValid;
- (unsigned char)maskPattern;
- (long long)symbolVersion;

@end
