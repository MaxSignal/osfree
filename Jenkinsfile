pipeline {
    agent any
    environment {
        ARCH = 'i386'
    }
    stages {
        //stage('builds on github') {
        //    steps {
        //        script {
        //            final String url = "https://api.github.com/repos/osfree-project/osfree/dispatches"
        //            final String response = sh(script: "curl --request POST --url '$url' \
        //                --header 'authorization: Bearer ${env.GITHUB_TOKEN}' \
        //                --data '{"event_type": "hello"}'", returnStdout: true).trim()
        //
        //            echo response
        //        }
        //    }
        //}
        //stage('vbox builds') {
        //    steps {
        //        ////
        //    }
        //}
        stage('docker builds') {
            agent {
                dockerfile {
                    label 'local-docker-i386'
                    filename 'Dockerfile'
                    additionalBuildArgs "--build-arg BASE_IMAGE=${env.ARCH}/debian:bullseye -t ${ARCH}/osfreebld:latest"
                    args "-e 1111:1111 -v ${WORKSPACE}:/root/osfree -w /root/osfree"
                    reuseNode true
                }
            }
            steps {
                echo "Running build ${env.BUILD_ID} on ${env.JENKINS_URL}"
                sh './_wcc.sh'
            }
        }
    }
}
