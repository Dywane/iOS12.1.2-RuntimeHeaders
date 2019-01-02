/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFProgressiveMimeParser : NSObject {
    id  _context;
    NSData * _currentBoundary;
    MFMimePart * _currentPart;
    unsigned long long  _cursor;
    NSMutableData * _data;
    id  _delegate;
    unsigned long long  _lastLength;
    struct { 
        unsigned int delegateBeganMimePart : 1; 
        unsigned int delegateFinishedMimePart : 1; 
        unsigned int delegateBeganData : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int state : 3; 
    }  _parserFlags;
    NSArray * _preserveHeaders;
    MFMimePart * _topLevelPart;
}

- (void)_continueParsing;
- (void)_continueParsingBody;
- (void)_continueParsingHeaders;
- (void)_continueParsingStartOfPart;
- (id)_currentBoundary;
- (void)_initializeTopLevelPartWithHeaders:(id)arg1;
- (void)_reportError:(id)arg1;
- (id)context;
- (id)currentPart;
- (id)data;
- (void)dealloc;
- (id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3;
- (void)noteDataLengthChanged:(unsigned int)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)topLevelPart;

@end
