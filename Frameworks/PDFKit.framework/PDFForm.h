/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFForm : NSObject <NSCopying> {
    PDFFormPrivateVars * _private;
}

- (void).cxx_destruct;
- (void)addFormField:(id)arg1;
- (void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)commonResetForm:(id)arg1 inclusive:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)createDictionaryRef;
- (void)dealloc;
- (struct CGPDFString { }*)defaultDAStringRef;
- (id)defaultStringValueForFieldNamed:(id)arg1;
- (id)description;
- (id)document;
- (id)fieldNamed:(id)arg1;
- (id)fieldNames;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (void)removeFormFieldWithFieldName:(id)arg1;
- (void)resetFormExcludingFields:(id)arg1;
- (void)resetFormForFields:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(bool)arg3;
- (id)stringValueForFieldNamed:(id)arg1;

@end
