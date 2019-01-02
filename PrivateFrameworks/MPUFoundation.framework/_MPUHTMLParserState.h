/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface _MPUHTMLParserState : NSObject <MPUHTMLParserState> {
    NSMutableArray * _attributeDictionaries;
    NSMutableAttributedString * _attributedString;
    NSData * _data;
    <MPUHTMLParserDelegate> * _delegate;
    struct { 
        unsigned int providesDefaultAttributes : 1; 
        unsigned int providesTagAttributes : 1; 
        unsigned int providesPrependTagString : 1; 
    }  _delegateCapabilites;
    NSMutableArray * _errors;
    MPUHTMLParser * _parser;
    void * _selfRef;
    NSMutableArray * _stringStack;
    NSMutableArray * _tagStack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendString:(id)arg1;
- (void)_characters:(const char *)arg1 length:(int)arg2;
- (void)_endDocument;
- (void)_endElement:(const char *)arg1;
- (void)_error:(long long)arg1 msg:(const char *)arg2 args:(char *)arg3;
- (void)_startDocument;
- (void)_startElement:(const char *)arg1 attrs:(const char **)arg2;
- (id)attributedString;
- (id)attributes;
- (id)currentTagAttributes;
- (id)initWithParser:(id)arg1 data:(id)arg2;
- (bool)parse:(id*)arg1;
- (id)tagStack;

@end
