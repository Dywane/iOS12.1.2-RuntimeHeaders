/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStructMemberInternal : MTLStructMember {
    unsigned long long  _aluType;
    unsigned long long  _argumentIndex;
    unsigned int  _dataType;
    id  _details;
    NSString * _name;
    unsigned long long  _offset;
    unsigned long long  _pixelFormat;
    unsigned long long  _raster_order_group;
    unsigned long long  _render_target;
    MTLType * _typeInfo;
}

@property (readonly) unsigned long long aluType;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long raster_order_group;
@property (readonly) unsigned long long render_target;

- (unsigned long long)aluType;
- (unsigned long long)argumentIndex;
- (id)arrayType;
- (unsigned long long)dataType;
- (id)dataTypeDescription;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)indirectArgumentIndex;
- (id)indirectArgumentType;
- (id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 indirectArgumentIndex:(unsigned long long)arg6 render_target:(unsigned long long)arg7 raster_order_group:(unsigned long long)arg8 details:(id)arg9;
- (bool)isMemberLayoutThreadSafeWith:(id)arg1;
- (id)name;
- (unsigned long long)offset;
- (unsigned long long)pixelFormat;
- (id)pointerType;
- (unsigned long long)raster_order_group;
- (unsigned long long)render_target;
- (void)setOffset:(unsigned long long)arg1;
- (id)structType;
- (id)textureReferenceType;

@end
