from django.shortcuts import redirect, render
from django.http import HttpResponse
from .models import Feature
from django.contrib.auth.models import User, auth
from django.contrib import messages
# Create your views here.
def index(request):

    features=Feature.objects.all()
    return render(request,'index.html',{'features':features})

    # feature1.is_true=True

    # feature2=Feature()
    # feature2.id=1
    # feature2.name='reliable'
    # feature2.details='our service is very reliable'
    # feature2.is_true=True

    # feature3=Feature()
    # feature3.id=2
    # feature3.name='easy to use'
    # feature3.details='our service is very easy to use'
    # feature3.is_true=True

    # feature4=Feature()
    # feature4.id=3
    # feature4.name='affordable'
    # feature4.details='our service is very affordable'
    # feature4.is_true=False


    # feature5=Feature()
    # feature5.id=4
    # feature5.name='high quality'
    # feature5.details='our service is of high quality'
    # feature5.is_true=True


    # features= [feature1, feature2, feature3, feature4, feature5]

    # return render(request,'index.html',{'features':features})


# def index(request):
#     # name='surya'
#     context={
#         'name':'surya',
#         'age':23,
#         'nationality':'Indian',
#     }
#     return render(request,'index.html',context)

def counter(request):
  posts=[1,2,3,4,5,'surya','tim','suresh']
  return render(request,'counter.html',{'posts':posts})

def register(request):
    if request.method == 'POST':
        username = request.POST['username']
        email = request.POST['email']
        password = request.POST['password']
        password2 = request.POST['password2']

        if password == password2:
            if User.objects.filter(username=username).exists():
                messages.info(request, 'Username already taken')
                return redirect('register')
            elif User.objects.filter(email=email).exists():
                messages.info(request, 'Email already taken')
                return redirect('register')
            else:
                user = User.objects.create_user(username=username, email=email, password=password)
                user.save()
                messages.success(request, 'User created  successfully')
                return render(request, 'login.html')
        else:
            messages.info(request, 'Passwords do not match')
            return redirect('register')
    else:
        return render(request,'register.html')
    
def login(request):
    if request.method == 'POST':
        username = request.POST['username']
        password = request.POST['password']

        user = auth.authenticate(username=username, password=password)

        if user is not None:
            auth.login(request, user)
            return redirect('/')
        else:
            messages.info(request, 'Invalid credentials')
            return redirect('login')
    else:
        return render(request,'login.html')
    
def logout(request):
    auth.logout(request)
    return redirect('/')

def post(request, pk):

    return render(request, 'post.html', {'pk': pk})