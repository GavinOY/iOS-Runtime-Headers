/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPRandomizedBit : NSObject {
    unsigned int  _index;
    int  _value;
}

@property (nonatomic, readonly) unsigned int index;
@property (nonatomic, readonly) int value;

+ (id)randomizedBit:(int)arg1 atIndex:(unsigned int)arg2;

- (id)description;
- (unsigned int)index;
- (id)init;
- (id)initBit:(int)arg1 atIndex:(unsigned int)arg2;
- (int)value;

@end
