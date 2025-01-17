#include "WidevineDummyDecoder.h"
#include "WidevineUtils.h"
#include "GMPLog.h"

using namespace cdm;

namespace mozilla {
WidevineDummyDecoder::WidevineDummyDecoder()
{
  GMP_LOG("WidevineDummyDecoder created");
}

void WidevineDummyDecoder::InitDecode(const GMPVideoCodec & aCodecSettings,
                                      const uint8_t * aCodecSpecific,
                                      uint32_t aCodecSpecificLength,
                                      GMPVideoDecoderCallback * aCallback,
                                      int32_t aCoreCount)
{
  GMP_LOG("WidevineDummyDecoder::InitDecode");

  mCallback = aCallback;
  mCallback->Error(GMPErr::GMPNotImplementedErr);
}

void WidevineDummyDecoder::Decode(GMPVideoEncodedFrame * aInputFrame,
                                  bool aMissingFrames,
                                  const uint8_t * aCodecSpecificInfo,
                                  uint32_t aCodecSpecificInfoLength,
                                  int64_t aRenderTimeMs)
{
  GMP_LOG("WidevineDummyDecoder::Decode");
  mCallback->Error(GMPErr::GMPNotImplementedErr);
}

void WidevineDummyDecoder::Reset()
{
  GMP_LOG("WidevineDummyDecoder::Reset");
  mCallback->Error(GMPErr::GMPNotImplementedErr);
}

void WidevineDummyDecoder::Drain()
{
  GMP_LOG("WidevineDummyDecoder::Drain");
  mCallback->Error(GMPErr::GMPNotImplementedErr);
}

void WidevineDummyDecoder::DecodingComplete()
{
  GMP_LOG("WidevineDummyDecoder::DecodingComplete");

  mCallback = nullptr;
  delete this;
}

WidevineDummyDecoder::~WidevineDummyDecoder() {
  GMP_LOG("WidevineDummyDecoder destroyed");
}
}