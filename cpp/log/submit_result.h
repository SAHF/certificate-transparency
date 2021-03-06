#ifndef CERT_TRANS_LOG_SUBMIT_RESULT_H_
#define CERT_TRANS_LOG_SUBMIT_RESULT_H_

enum SubmitResult {
  ADDED,
  DUPLICATE,
  BAD_PEM_FORMAT,
  SUBMISSION_TOO_LONG,
  CERTIFICATE_VERIFY_ERROR,
  PRECERT_CHAIN_NOT_WELL_FORMED,
  INTERNAL_ERROR,
};

#endif  // CERT_TRANS_LOG_SUBMIT_RESULT_H_
