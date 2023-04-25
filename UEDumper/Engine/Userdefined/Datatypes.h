#pragma once

//set here your names how you want them to appear everywhere

#define TYPE_BOOLEAN	"bool"
#define TYPE_UCHAR		"unsigned char"
#define TYPE_CHAR		"char"
#define TYPE_UI8		"uint8_t"
#define TYPE_UI16		"uint16_t"
#define TYPE_UI32		"uint32_t"
#define TYPE_UI64		"uint64_t"
#define TYPE_I8			"int8_t"
#define TYPE_I16		"int16_t"
#define TYPE_I32		"int32_t"
#define TYPE_I64		"int64_t"
#define TYPE_FLOAT		"float"
#define TYPE_DOUBLE		"double"

//function that calculates the size for the given name
inline int getSize(const std::string& dataType) {
    if (dataType == TYPE_BOOLEAN) {
        return sizeof(bool);
    }
    if (dataType == TYPE_CHAR || dataType == TYPE_UCHAR) {
        return sizeof(char);
    }
    if (dataType == TYPE_UI8 || dataType == TYPE_I8) {
        return sizeof(std::int8_t);
    }
    if (dataType == TYPE_UI16 || dataType == TYPE_I16) {
        return sizeof(std::int16_t);
    }
    if (dataType == TYPE_UI32 || dataType == TYPE_I32) {
        return sizeof(std::int32_t);
    }
    if (dataType == TYPE_UI64 || dataType == TYPE_I64) {
        return sizeof(std::int64_t);
    }
    if (dataType == TYPE_FLOAT) {
        return sizeof(float);
    }
    if (dataType == TYPE_DOUBLE) {
        return sizeof(double);
    }
    return -1; // Unknown data type
}